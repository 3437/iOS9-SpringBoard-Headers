/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOStateTransitionFeedback : PBCodable <NSCopying> {

	int _newValue;
	int _oldValue;
	int _stateType;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasStateType; 
@property (assign,nonatomic) int stateType;                  //@synthesize stateType=_stateType - In the implementation block
@property (assign,nonatomic) BOOL hasOldValue; 
@property (assign,nonatomic) int oldValue;                   //@synthesize oldValue=_oldValue - In the implementation block
@property (assign,nonatomic) BOOL hasNewValue; 
@property (assign,nonatomic) int newValue;                   //@synthesize newValue=_newValue - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasOldValue:(BOOL)arg1 ;
-(void)setNewValue:(int)arg1 ;
-(void)setHasStateType:(BOOL)arg1 ;
-(BOOL)hasNewValue;
-(int)newValue;
-(void)setOldValue:(int)arg1 ;
-(int)stateType;
-(int)oldValue;
-(BOOL)hasOldValue;
-(void)setStateType:(int)arg1 ;
-(void)setHasNewValue:(BOOL)arg1 ;
-(BOOL)hasStateType;
-(BOOL)readFrom:(id)arg1 ;
@end
