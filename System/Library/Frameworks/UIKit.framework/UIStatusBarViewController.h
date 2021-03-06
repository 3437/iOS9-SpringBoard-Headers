/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@class UIWindow, UIView, UIClassicStatusBarView;

@interface UIStatusBarViewController : UIViewController {

	BOOL _iPhoneWS;
	UIWindow* _window;
	UIView* _statusBar;
	UIClassicStatusBarView* _statusBarBackgroundView;
	BOOL _keyboardVisible;

}
+(double)statusBarOrientationAnimationDurationFrom:(long long)arg1 to:(long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2 ;
-(id)_window;
-(void)loadView;
-(BOOL)isClassicControlWindow:(id)arg1 ;
-(void)_updateStatusBarForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 style:(long long)arg3 hidden:(BOOL)arg4 slideUp:(BOOL)arg5 ;
-(void)_changeStatusBarOrientationFrom:(long long)arg1 toOrientation:(long long)arg2 ;
-(void)_prepareForZoom:(BOOL)arg1 ;
-(void)_zoom:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_statusBarViewControllerKeyboardWillShow:(id)arg1 ;
-(void)_statusBarViewControllerKeyboardDidHide:(id)arg1 ;
-(void)_statusBarHideAnimationFinished:(id)arg1 finished:(BOOL)arg2 hidden:(id)arg3 ;
-(void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 hidden:(BOOL)arg3 slideUp:(BOOL)arg4 ;
-(void)_changeStatusBarOrientationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3 ;
-(void)_finishStatusBarOrientationChange;
-(CGSize)_statusBarSizeForOrientation:(long long)arg1 ;
@end

