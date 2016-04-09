/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IMAPDownload : NSObject {
	unsigned _uid;
	NSMutableArray* _pendingFetchResults;
}
// inherited: -(void)dealloc;
-(instancetype)initWithUid:(unsigned long)uid;
-(unsigned long)uid;
-(unsigned long)expectedLength;
-(BOOL)isComplete;
-(unsigned long)bytesFetched;
-(id)data;
-(id)error;
-(void)setError:(id)error;
-(void)handleFetchResult:(id)result;
-(void)processResults;
-(void)addCommandsToPipeline:(id)pipeline withCache:(id)cache;
@end

