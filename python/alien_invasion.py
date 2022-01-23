import pygame.display

from ship import Ship
class AlienInvasion:
    def __init__(self):
        pygame.display.set_caption("Alien Invasion")
        self.ship = Ship(self)
    def run_game(self):
        self.screen.fill(self.settings.bg_color)
        self.ship.blitme()
        pygame.display.flip()
