/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface HKWorkoutEvent : NSObject <NSSecureCoding> {

	long long _type;
	NSDate* _date;

}

@property (readonly) long long type; 
@property (copy,readonly) NSDate * date; 
+(id)_newWorkoutEventWithType:(long long)arg1 date:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)_workoutEventWithType:(long long)arg1 date:(id)arg2 ;
+(id)workoutEventWithType:(long long)arg1 date:(id)arg2 ;
-(id)_validateConfiguration;
-(void)_assertPropertiesValid;
-(void)_setDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_init;
-(long long)type;
-(NSDate *)date;
-(void)_setType:(long long)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
@end
