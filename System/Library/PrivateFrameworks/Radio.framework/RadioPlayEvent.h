/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDate, NSString, NSData, NSDictionary;

@interface RadioPlayEvent : NSObject <NSCopying, NSMutableCopying> {

	NSDate* _datePlayed;
	long long _endReason;
	double _endTimeInTrack;
	NSString* _externalIdentifier;
	double _startTimeInTrack;
	long long _storeID;
	NSData* _timedMetadata;
	NSDictionary* _trackInfo;
	long long _type;

}

@property (nonatomic,readonly) NSDate * datePlayed;                             //@synthesize datePlayed=_datePlayed - In the implementation block
@property (nonatomic,readonly) long long endReason;                             //@synthesize endReason=_endReason - In the implementation block
@property (nonatomic,readonly) double endTimeInTrack;                           //@synthesize endTimeInTrack=_endTimeInTrack - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) double startTimeInTrack;                         //@synthesize startTimeInTrack=_startTimeInTrack - In the implementation block
@property (nonatomic,readonly) long long storeID;                               //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy,readonly) NSData * timedMetadata;                     //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * trackInfo;                   //@synthesize trackInfo=_trackInfo - In the implementation block
@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
-(NSData *)timedMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)externalIdentifier;
-(NSDate *)datePlayed;
-(id)playDictionary;
-(long long)endReason;
-(double)endTimeInTrack;
-(double)startTimeInTrack;
-(long long)storeID;
-(NSDictionary *)trackInfo;
@end

