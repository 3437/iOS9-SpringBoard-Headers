/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOLocationShiftRequest, GEOPolyLocationShiftRequest, PBRequest;

@interface GEOLocationShiftFunctionRequest : NSObject {

	unsigned short _providerID;
	GEOLocationShiftRequest* _locationShiftRequest;
	GEOPolyLocationShiftRequest* _polyLocationShiftRequest;

}

@property (assign,nonatomic) unsigned short providerID;               //@synthesize providerID=_providerID - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE16 coordinate; 
@property (nonatomic,readonly) PBRequest * shiftRequest; 
-(void)setCoordinate:(SCD_Struct_GE16)arg1 ;
-(SCD_Struct_GE16)coordinate;
-(void)dealloc;
-(PBRequest *)shiftRequest;
-(unsigned short)providerID;
-(void)setProviderID:(unsigned short)arg1 ;
@end

