/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTraitsTransitScheduleTimeRange : PBCodable <NSCopying> {

	double _duration;
	double _startTime;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                //@synthesize duration=_duration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)startTime;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

