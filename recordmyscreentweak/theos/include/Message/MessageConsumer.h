/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "QueryProgressMonitor.h"


@protocol MessageConsumer <QueryProgressMonitor>
-(void)newMessagesAvailable:(id)available;
-(void)newMessagesAvailable:(id)available ranks:(id)ranks;
@end

