/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>

typedef struct UIColorComponents {
	CGFloat r, g, b, a;
} UIColorComponents;

@interface UIImageBuffer : NSObject {
	unsigned m_width;
	unsigned m_height;
	unsigned m_pixelCount;
	unsigned m_componentCount;
	UIColorComponents* m_pixels;
}
@property(readonly, assign, nonatomic) unsigned width;
@property(readonly, assign, nonatomic) unsigned height;
-(instancetype)initWithWidth:(unsigned)width height:(unsigned)height;
-(void)dealloc;
-(UIColorComponents*)pixels;
-(void)getPixel:(UIColorComponents*)pixel atPoint:(CGPoint)point;
-(void)setPixel:(UIColorComponents*)pixel atPoint:(CGPoint)point;
-(void)fillWithPixel:(UIColorComponents*)pixel;
-(CGImageRef)createImage;
@end

