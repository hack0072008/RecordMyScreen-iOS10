/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPWildcatVideoOverlay.h"

@class UILabel, UINavigationButton, MPWildcatFullScreenTransportControls, NSString, UIActivityIndicatorView, UIImageView, UINavigationBar, UINavigationItem, UIBarButtonItem, UIPopoverController;
@protocol MPWildcatFullScreenVideoOverlayDelegate;

@interface MPWildcatFullScreenVideoOverlay : MPWildcatVideoOverlay {
@private
	id<MPWildcatFullScreenVideoOverlayDelegate> _delegate;
	MPWildcatFullScreenTransportControls* _transportControls;
	UIImageView* _hudImageView;
	UINavigationBar* _navigationBar;
	UINavigationItem* _navigationItem;
	UIImageView* _navigationBarBackgroundShort;
	UIImageView* _navigationBarBackgroundTall;
	UIImageView* _navigationBarShadow;
	NSString* _title;
	UINavigationButton* _scaleModeButton;
	UILabel* _scrubSpeedLabel;
	UILabel* _scrubInstructionsLabel;
	UIBarButtonItem* _doneButton;
	UIPopoverController* _popoverController;
	UILabel* _loadingMovieLabel;
	UIActivityIndicatorView* _loadingMovieIndicator;
}
@property(assign, nonatomic) id<MPWildcatFullScreenVideoOverlayDelegate> delegate;
@property(copy, nonatomic) NSString* title;
-(instancetype)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)setAlpha:(float)alpha;
-(void)setItem:(id)item;
-(void)setVideoViewController:(id)controller;
-(void)setInterfaceOrientation:(int)orientation;
-(void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
-(void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
-(unsigned)disabledParts;
-(void)setDisabledParts:(unsigned)parts;
-(void)detailSliderTrackingDidBegin:(id)detailSliderTracking;
-(void)detailSliderTrackingDidEnd:(id)detailSliderTracking;
-(void)detailSliderTrackingDidCancel:(id)detailSliderTracking;
-(void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)_doneButton:(id)button;
-(void)_scaleButton:(id)button;
-(void)showAlternateTracksPopover;
-(void)hideAlternateTracksPopover;
-(void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;
-(void)_itemDurationAvailableNotification:(id)notification;
-(id)_navBarBackgroundImageForProgressControl:(BOOL)progressControl tallStyle:(BOOL)style;
-(void)_initSubviews;
-(void)_reconfigureNavigationBarAnimated:(BOOL)animated;
-(void)_showScrubInstructions;
-(void)_hideScrubInstructions;
-(unsigned)_convertedPartsMask:(unsigned)mask;
-(void)_scheduleHidePopoverTimer;
@end

