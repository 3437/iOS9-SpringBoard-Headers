/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLocationShiftResponse : PBCodable <NSCopying> {

	SCD_Struct_GE95 _shiftedPixel;

}

@property (readonly) SCD_Struct_GE16 shiftedCoordinate; 
@property (assign,nonatomic) SCD_Struct_GE96 shiftedPixel;              //@synthesize shiftedPixel=_shiftedPixel - In the implementation block
-(SCD_Struct_GE16)shiftedCoordinate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(SCD_Struct_GE96)shiftedPixel;
-(void)setShiftedPixel:(SCD_Struct_GE96)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
