/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTDeviceLocationPredictorNextPredictedLocationsOfInterestNotification : RTNotification {

	NSArray* _nextPredictedLocationsOfInterest;

}

@property (nonatomic,retain) NSArray * nextPredictedLocationsOfInterest;              //@synthesize nextPredictedLocationsOfInterest=_nextPredictedLocationsOfInterest - In the implementation block
+(id)notificationName;
-(NSArray *)nextPredictedLocationsOfInterest;
-(id)initWithNextPredictedLocationsOfInterest:(id)arg1 ;
-(void)setNextPredictedLocationsOfInterest:(NSArray *)arg1 ;
@end

