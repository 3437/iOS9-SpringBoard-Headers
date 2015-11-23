/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UINavigationButton.h>

@class UIView;

@interface SUNavigationButton : UINavigationButton {

	UIView* _accessoryView;
	UIEdgeInsets _accessoryViewInsets;

}

@property (nonatomic,retain) UIView * accessoryView;                        //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets accessoryViewInsets;              //@synthesize accessoryViewInsets=_accessoryViewInsets - In the implementation block
-(void)setAccessoryViewInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)accessoryViewInsets;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(CGRect)_accessoryViewRectForContentRect:(CGRect)arg1 ;
@end
