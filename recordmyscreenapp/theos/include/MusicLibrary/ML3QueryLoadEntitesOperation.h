/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3QueryLoadOperation.h"


__attribute__((visibility("hidden")))
@interface ML3QueryLoadEntitesOperation : ML3QueryLoadOperation {
@private
	NSRange _loadRange;
	BOOL _ordered;
}
@property(assign) NSRange loadRange;
@property(assign) BOOL ordered;
-(instancetype)initWithQuery:(id)query;
-(instancetype)initWithQuery:(id)query loadRange:(NSRange)range ordered:(BOOL)ordered;
-(void)dealloc;
-(void)main;
@end

