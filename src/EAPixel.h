#include <wand/MagickWand.h>

typedef struct _EAPixel
{
	MagickPixelPacket px;
	float x;
	float y;
	PixelWand *pxwand;
}EAPixel;

EAPixel* NewEAPixel(void);

void DestroyEAPixel(EAPixel *px);
