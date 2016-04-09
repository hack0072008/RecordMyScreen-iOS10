/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAMoveResponse : NSObject {
	int _status;
	NSString* _sourceID;
	NSString* _destID;
}
-(instancetype)initWithStatus:(int)status sourceID:(id)anId destID:(id)anId3;
-(int)status;
-(id)sourceID;
-(id)destID;
// inherited: -(void)dealloc;
@end

