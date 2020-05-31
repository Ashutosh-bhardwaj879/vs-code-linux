#events and title 
import pygame
pygame.init()
gameDisplay = pygame.display.set_mode((800,600))
pygame.display.set_caption("SLITHER")
pygame.display.update()
gameExit = False
while not gameExit:
    for event in pygame.event.get():
        print(event)
pygame.quit()
quit()