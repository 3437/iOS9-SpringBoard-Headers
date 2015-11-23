/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameplayKit/GKRandomDistribution.h>

@interface GKGaussianDistribution : GKRandomDistribution {

	float _mean;
	float _deviation;

}

@property (nonatomic,readonly) float mean;                   //@synthesize mean=_mean - In the implementation block
@property (nonatomic,readonly) float deviation;              //@synthesize deviation=_deviation - In the implementation block
-(long long)nextInt;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(id)initWithRandomSource:(id)arg1 mean:(float)arg2 deviation:(float)arg3 ;
-(float)deviation;
-(float)mean;
@end
