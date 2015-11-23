/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _UIKBCompatInputView : UIView

@property (nonatomic,readonly) UIView * touchableView; 
+(BOOL)_retroactivelyRequiresConstraintBasedLayout;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(CGRect)_compatibleBounds;
-(BOOL)_hasAutolayoutHeightConstraint;
-(UIView *)touchableView;
@end
