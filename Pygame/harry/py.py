#initialize and import
import pygame
import random
pygame.init()
#colors
white = (255,255,255)
red =(255,0,0) 
black = (0,0,0)
#displaying window
gameWindow = pygame.display.set_mode((700,500))
#game name
pygame.display.set_caption("SNAKES")
pygame.display.update()                          
#Pygame specific variable
exit_game = False
game_over = False
snake_x = 45
snake_y = 55
velocity_x = 0
velocity_y = 0
init_velocity = 3
snake_size = 10
food_x = random.randint(20,450)#20 can be 0 and 450 can be 900
food_y = random.randint(20,310)#20 can be 0 and 600 can be 600
clock = pygame.time.Clock()
fps = 40#more fps,more processing time
score = 0
font = pygame.font.SysFont(None,55)
def text_screen(text,color,x,y):
    screen_text = font.render(text,True,color)
    gameWindow.blit(screen_text,[x,y])
#loops
while not exit_game:
    for event in pygame.event.get():
#prints every movemrnt of mouse and keybobard
#print(event)
        if event.type == pygame.QUIT:
            exit_game = True
        #Movement of snake
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RIGHT:
                #position movement
                #snake_x = snake_x + 22
                velocity_x = init_velocity
                velocity_y = 0
            if event.key == pygame.K_LEFT:
                #snake_x = snake_x - 22
                velocity_x = -init_velocity
                velocity_y = 0
            if event.key == pygame.K_UP:
                #snake_y = snake_y - 22
                velocity_y = -init_velocity
                velocity_x = 0
            if event.key == pygame.K_DOWN:
                #snake_y = snake_y + 22
                velocity_y = init_velocity
                velocity_x = 0
    snake_x = snake_x + velocity_x
    snake_y = snake_y + velocity_y
    if abs(snake_x - food_x)<8 and abs(snake_y - food_y)<8:
        score = score + 1
        #print(score*10)
        food_x = random.randint(20,450)#20can be 0 and 450 can be 900
        food_y = random.randint(20,310)
#color of game window 
    gameWindow.fill(black)
    text_screen(str(score*10),red,5,5)
#making head of snake 
    pygame.draw.rect(gameWindow,red,[food_x,food_y,snake_size,snake_size])
    pygame.draw.rect(gameWindow,white,[snake_x,snake_y,snake_size,snake_size])
#updates colcor to white 
    pygame.display.update()
    clock.tick(fps)
#if event.type == pygame.KEYDOWN:
# if event.key == pygame.K_RIGHT:
#  print("You have pressed Right arrow key")
#quitting game
pygame.quit()
quit()