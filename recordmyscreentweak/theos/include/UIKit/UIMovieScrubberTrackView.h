/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>
#import <Availability2.h>

@class NSArray, NSDictionary, UIMovieScrubberTrackOverlayView, NSMutableDictionary;
@protocol UIMovieScrubberTrackViewDelegate, UIMovieScrubberTrackViewDataSource;

@interface UIMovieScrubberTrackView : UIView {
	id<UIMovieScrubberTrackViewDataSource> _dataSource;
	id<UIMovieScrubberTrackViewDelegate> _delegate;
	NSArray* _summaryThumbnailViews;
	NSArray* _summaryThumbnailTimestamps;
	NSArray* _summaryThumbnailChildTimestamps;
	NSDictionary* _thumbnailStartXValues;
	NSDictionary* _childThumbnailViews;
	NSMutableDictionary* _thumbnailViews;
	NSArray* _timestamps;
	UIMovieScrubberTrackOverlayView* _overlayView;
	UIView* _maskView;
	UIView* _maskContainerView;
	CGSize _thumbnailSize;
	float _zoomOriginXDelta;
	float _zoomWidthDelta;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1
	float _unclampedZoomWidthDelta;
#endif
	float _zoomAnimationDuration;
	double _duration;
	double _value;
	double _startValue;
	double _endValue;
	struct {
		unsigned delegateSizeOriginDelta : 1;
		unsigned delegateDidExpand : 1;
		unsigned delegateDidCollapse : 1;
		unsigned delegateWillRequestThumbs : 1;
		unsigned delegateDidRequestThumbs : 1;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1
		unsigned delegateZoomAnimationDuration : 1;
		unsigned delegateZoomAnimationDelay : 1;
#endif
		unsigned needsReload : 1;
		unsigned editing : 1;
		unsigned editingHandle;
		unsigned zoomIsDisabled : 1;
	} _trackFlags;
}
@property(assign, nonatomic) id<UIMovieScrubberTrackViewDelegate> delegate;
@property(assign, nonatomic) id<UIMovieScrubberTrackViewDataSource> dataSource;
-(instancetype)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(void)setFrame:(CGRect)frame;
-(void)setValue:(double)value;
-(void)setEditing:(BOOL)editing;
-(void)animateFillFramesAway;
-(void)setStartValue:(double)value;
-(void)setEndValue:(double)value;
-(void)setThumbnailImage:(CGImageRef)image forTimestamp:(id)timestamp;
-(id)_createImageViewForTimestamp:(id)timestamp;
-(void)clear;
-(void)_reallyReloadData;
-(void)reloadData;
-(void)layoutSubviews;
-(void)setZoomAnimationDuration:(float)duration;
-(float)zoomAnimationDuration __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(BOOL)zoomAtPoint:(CGPoint)point;
-(void)_setOverlayViewIsZoomed:(BOOL)zoomed minValue:(float)value maxValue:(float)value3 __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(void)unzoom;
-(void)_zoomAnimation:(id)animation didFinish:(id)finish context:(void*)context;
-(void)_unzoomAnimation:(id)animation didFinish:(id)finish context:(void*)context;
@end

