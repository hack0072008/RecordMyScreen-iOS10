/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBCalendarAlertItem : SBAlertItem {
	double _date;
	NSString* _title;
	NSString* _location;
	int _eventId;
	BOOL _isAllDay;
}
+(void)registerForAlerts;
+(void)alarmsDidFire:(id)alarms;
+(void)significantTimeChange;
-(instancetype)initWithDate:(double)date title:(id)title location:(id)location eventId:(int)anId isAllDay:(BOOL)day;
// inherited: -(void)dealloc;
-(id)_dayString:(BOOL)string;
-(id)_timeString;
-(id)_dateString:(BOOL)string;
// inherited: -(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
// inherited: -(id)lockLabel;
-(void)didPresentAlertSheet:(id)sheet;
-(void)revealEvent;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
// inherited: -(void)performUnlockAction;
// inherited: -(BOOL)shouldShowInEmergencyCall;
// inherited: -(BOOL)willShowInAwayItems;
// inherited: -(id)awayItem;
@end

