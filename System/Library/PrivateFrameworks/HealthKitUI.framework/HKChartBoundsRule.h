/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface HKChartBoundsRule : NSObject {

	/*^block*/id _descriptor;

}

@property (nonatomic,copy) id descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
+(id)ruleWithDescriptor:(/*^block*/id)arg1 ;
-(void)setDescriptor:(id)arg1 ;
-(id)descriptor;
-(BOOL)adjustedValuesForMinValue:(double)arg1 maxValue:(double)arg2 minValueOut:(double*)arg3 maxValueOut:(double*)arg4 ;
@end
