#include "libtcod.hpp"
int main() {
	int playerx = 35, playery = 15;
	TCODConsole::setCustomFont("fonts/consolas12x12_gs_tc.png", TCOD_FONT_LAYOUT_TCOD | TCOD_FONT_TYPE_GREYSCALE);
	TCODConsole::initRoot(70, 30, "BeginnerRL", false);
	while (!TCODConsole::isWindowClosed()) {
		TCOD_key_t key;
		TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, &key, NULL);
		switch (key.vk) {
			case TCODK_UP: playery--; break;
			case TCODK_DOWN: playery++; break;
			case TCODK_LEFT: playerx--; break;
			case TCODK_RIGHT: playerx++; break;
			default:break;
		}
		TCODConsole::root->clear();
		TCODConsole::root->putChar(playerx, playery, '@');
		TCODConsole::flush();
	}
	return 0;
}