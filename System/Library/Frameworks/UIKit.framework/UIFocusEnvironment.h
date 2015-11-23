/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIView;


@protocol UIFocusEnvironment <NSObject>
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@required
-(void)setNeedsFocusUpdate;
-(UIView *)preferredFocusedView;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;

@end
