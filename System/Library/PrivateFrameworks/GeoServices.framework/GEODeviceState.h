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

@class GEOCarInfo, NSString;

@interface GEODeviceState : PBCodable <NSCopying> {

	GEOCarInfo* _carInfo;
	int _deviceBatteryState;
	int _deviceConnectivity;
	NSString* _deviceInputLocale;
	int _deviceInterfaceOrientation;
	NSString* _deviceLocale;
	NSString* _deviceOutputLocale;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceLocale; 
@property (nonatomic,retain) NSString * deviceLocale;                         //@synthesize deviceLocale=_deviceLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInputLocale; 
@property (nonatomic,retain) NSString * deviceInputLocale;                    //@synthesize deviceInputLocale=_deviceInputLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceOutputLocale; 
@property (nonatomic,retain) NSString * deviceOutputLocale;                   //@synthesize deviceOutputLocale=_deviceOutputLocale - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceConnectivity; 
@property (assign,nonatomic) int deviceConnectivity;                          //@synthesize deviceConnectivity=_deviceConnectivity - In the implementation block
@property (nonatomic,readonly) BOOL hasCarInfo; 
@property (nonatomic,retain) GEOCarInfo * carInfo;                            //@synthesize carInfo=_carInfo - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceInterfaceOrientation; 
@property (assign,nonatomic) int deviceInterfaceOrientation;                  //@synthesize deviceInterfaceOrientation=_deviceInterfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceBatteryState; 
@property (assign,nonatomic) int deviceBatteryState;                          //@synthesize deviceBatteryState=_deviceBatteryState - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOCarInfo *)carInfo;
-(void)setCarInfo:(GEOCarInfo *)arg1 ;
-(BOOL)hasCarInfo;
-(BOOL)hasDeviceBatteryState;
-(void)setHasDeviceBatteryState:(BOOL)arg1 ;
-(void)setDeviceBatteryState:(int)arg1 ;
-(int)deviceBatteryState;
-(BOOL)hasDeviceInterfaceOrientation;
-(void)setHasDeviceInterfaceOrientation:(BOOL)arg1 ;
-(void)setDeviceInterfaceOrientation:(int)arg1 ;
-(int)deviceInterfaceOrientation;
-(NSString *)deviceOutputLocale;
-(NSString *)deviceInputLocale;
-(void)setDeviceConnectivity:(int)arg1 ;
-(BOOL)hasDeviceConnectivity;
-(int)deviceConnectivity;
-(NSString *)deviceLocale;
-(void)setDeviceOutputLocale:(NSString *)arg1 ;
-(void)setDeviceLocale:(NSString *)arg1 ;
-(BOOL)hasDeviceLocale;
-(BOOL)hasDeviceOutputLocale;
-(BOOL)hasDeviceInputLocale;
-(void)setDeviceInputLocale:(NSString *)arg1 ;
-(void)setHasDeviceConnectivity:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

