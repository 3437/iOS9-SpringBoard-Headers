/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSReauthorizationProtocol : MSStreamsProtocol {

	MSRPCContext* _context;
	NSArray* _assetsInFlight;

}
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)requestReauthorizationForAssets:(id)arg1 ;
-(void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg1 ;
-(void)abort;
@end

