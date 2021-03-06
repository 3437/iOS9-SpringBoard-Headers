/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@interface SKUIScreenshotDataConsumer : SKUIImageDataConsumer {

	BOOL _forcesPortrait;
	BOOL _drawsBorder;
	CGSize _screenshotSize;

}

@property (assign,nonatomic) BOOL forcesPortrait;                  //@synthesize forcesPortrait=_forcesPortrait - In the implementation block
@property (assign,nonatomic) BOOL drawsBorder;                     //@synthesize drawsBorder=_drawsBorder - In the implementation block
@property (nonatomic,readonly) CGSize constraintSize;              //@synthesize screenshotSize=_screenshotSize - In the implementation block
+(id)consumer;
+(id)consumerWithScreenshotSize:(CGSize)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
-(CGSize)constraintSize;
-(BOOL)forcesPortrait;
-(void)setForcesPortrait:(BOOL)arg1 ;
-(BOOL)drawsBorder;
-(void)setDrawsBorder:(BOOL)arg1 ;
@end

