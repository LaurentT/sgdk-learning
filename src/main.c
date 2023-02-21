#include <genesis.h>
#include <resources.h>

Sprite *ball;

int main(bool hard)
{
	// Load tileset at index 1
	VDP_loadTileSet(bgtile.tileset, 1, DMA);
	// Use palette from tileset and assign it to PAL1
	PAL_setPalette(PAL1, bgtile.palette->data, DMA);
	// Use tileset index 1 with PAL1 previously defined
	VDP_fillTileMapRect(BG_B, TILE_ATTR_FULL(PAL1, 0, FALSE, FALSE, 1), 0, 0, 40, 30);

	// All the above works

	//////
	// Init sprite engine
	SPR_init();
	// Add sprite using palette PAL1
	ball = SPR_addSprite(&imgball, 100, 100, TILE_ATTR(PAL1, FALSE, FALSE, FALSE));

	while (TRUE)
	{
		// Should draw sprites
		SPR_update();
		VDP_waitVSync();
	}

	return 0;
}
