#include <genesis.h>
#include <resources.h>

Sprite *ball;

int main(bool hard)
{
	VDP_loadTileSet(bgtile.tileset, 1, DMA);
	PAL_setPalette(PAL1, bgtile.palette->data, DMA);
	VDP_fillTileMapRect(BG_B, TILE_ATTR_FULL(PAL1, 0, FALSE, FALSE, 1), 0, 0, 40, 30);

	SPR_init();
	ball = SPR_addSprite(&imgball, 100, 100, TILE_ATTR(PAL1, FALSE, FALSE, FALSE));

	while (TRUE)
	{
		SPR_update();
		VDP_waitVSync();
	}

	return 0;
}
