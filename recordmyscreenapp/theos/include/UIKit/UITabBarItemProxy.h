/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class UIImageView, UITabBarItem;

@interface UITabBarItemProxy : NSObject {
	UITabBarItem* _item;
	UIImageView* _view;
}
-(instancetype)initWithItem:(id)item inTabBar:(id)tabBar;
-(void)dealloc;
-(id)item;
-(id)view;
@end

