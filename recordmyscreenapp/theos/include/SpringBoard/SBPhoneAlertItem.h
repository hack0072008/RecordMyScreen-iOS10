/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem {
	NSString* _bodyText;
	NSString* _title;
}
-(instancetype)initWithTitle:(id)title bodyText:(id)text;
// inherited: -(void)dealloc;
// inherited: -(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
@end

