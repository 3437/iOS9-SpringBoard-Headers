/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>
#import <libobjc.A.dylib/MPUExtrasSlideshowViewControllerDataSource.h>
#import <libobjc.A.dylib/MPUExtrasZoomingImageTransitionParticipant.h>

@class MPUExtrasSlideshowViewController, NSArray, UITapGestureRecognizer, IKSlideshowElement, NSString;

@interface MPUExtrasSlideshowTemplateViewController : MPUExtrasTemplateViewController <MPUExtrasSlideshowViewControllerDataSource, MPUExtrasZoomingImageTransitionParticipant> {

	BOOL _overlayHidden;
	BOOL _preventNavbarAutohide;
	MPUExtrasSlideshowViewController* _slideshowViewController;
	NSArray* _imageElements;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) MPUExtrasSlideshowViewController * slideshowViewController;              //@synthesize slideshowViewController=_slideshowViewController - In the implementation block
@property (nonatomic,readonly) IKSlideshowElement * templateElement; 
@property (nonatomic,retain) NSArray * imageElements;                                                 //@synthesize imageElements=_imageElements - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                           //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)_handleTap:(id)arg1 ;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(MPUExtrasSlideshowViewController *)slideshowViewController;
-(BOOL)shouldPerformZoomingImageTransitionFromImageElement:(id)arg1 toImageAtIndex:(unsigned long long)arg2 ;
-(void)slideshowViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)numberOfImagesForSlideshowViewController:(id)arg1 ;
-(void)setImageElements:(NSArray *)arg1 ;
-(void)setSlideshowViewController:(MPUExtrasSlideshowViewController *)arg1 ;
-(void)_toggleVisibilityOfNavigationBar;
-(NSArray *)imageElements;
-(void)_firstImageLoadedHideNavigationBar;
-(BOOL)showsPlaceholder;
-(IKSlideshowElement *)templateElement;
@end
