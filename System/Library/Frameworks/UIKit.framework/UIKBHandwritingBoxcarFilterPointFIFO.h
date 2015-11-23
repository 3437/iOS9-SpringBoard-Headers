/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO {

	NSMutableArray* _prevPoints;
	unsigned long long _width;

}

@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) unsigned long long width;                 //@synthesize width=_width - In the implementation block
-(void)dealloc;
-(void)flush;
-(unsigned long long)width;
-(void)addPoint:(SCD_Struct_UI68)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)clear;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 ;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)prevPoints;
-(void)emitAveragedPoint;
@end
