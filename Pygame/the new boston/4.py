#quit event handling
import pygame
gameDisplay = pygame.display.set_mode((800,600))
pygame.display.set_caption("SLITHER")
pygame.display.update()
gameExit = False
while not gameExit:
    for event in pygame.event.get():
        #print(event)
        if event.type == pygame.QUIT:
            gameExit = True





pygame.quit()
quit()