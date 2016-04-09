/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPFlipTransitionController.h"

@class UINavigationBar, UINavigationItem, UITextLabel;

@interface MPVideoChapterFlipTransitionController : MPFlipTransitionController {
	UINavigationBar* _navigationBar;
	UINavigationItem* _originalNavigationItem;
	UITextLabel* _chapterGuideTitleLabel;
	unsigned _shouldPlayAfterFlip : 1;
}
@property(retain, nonatomic) UINavigationBar* navigationBar;
@property(assign, nonatomic) BOOL playAfterFlip;
-(void)dealloc;
-(void)transition:(unsigned)transition;
-(BOOL)leaveSpaceForStatusBarAndNavigationBarInOrientation:(int)orientation;
-(void)_done:(id)done;
-(void)_hideNavigationBarAnimationDidFinish:(id)_hideNavigationBarAnimation;
-(id)_chapterGuideTitleLabel;
-(id)_copySwizzledNavigationViews;
-(void)_hideNavigationAndStatusBars;
-(int)_interfaceOrientation;
-(void)_restoreOriginalNavigationViews:(BOOL)views;
-(void)_showChapterGuideNavigationViews;
@end

