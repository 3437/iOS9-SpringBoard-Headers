/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFanOutNode.h>

@class BWNodeOutput;

@interface BWFaceDetectionNode : BWFanOutNode {

	BWNodeOutput* _metadataObjectOutput;
	BWNodeOutput* _boxedMetadataOutput;
	CGRect _rectOfInterest;
	BOOL _metadataObjectOutputEnabled;
	BOOL _boxedMetadataOutputEnabled;
	int _lastObjectFaceCount;
	opaqueCMFormatDescriptionRef _boxedFormatDescription;
	unsigned _localIDOfDetectedFace_BE;
	unsigned _localIDOfDetectedFaceFaceID_BE;
	unsigned _localIDOfDetectedFaceBounds_BE;
	unsigned _localIDOfDetectedFaceRoll_BE;
	unsigned _localIDOfDetectedFaceYaw_BE;
	OpaqueCMBlockBufferRef _emptyMetadataSampleData;
	SCD_Struct_BW2 _prevBoxedFacePTS;
	SCD_Struct_BW2 _prevBoxedFaceDur;
	SCD_Struct_BW2 _prevBoxedNoFacePTS;
	int _lastBoxedFaceCount;

}

@property (readonly) BWNodeOutput * metadataObjectOutput; 
@property (readonly) BWNodeOutput * boxedMetadataOutput; 
+(void)initialize;
-(CGRect)rectOfInterest;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)_renderSampleBufferForMetadataObjectOutput:(opaqueCMSampleBufferRef)arg1 withFaceArray:(id)arg2 ;
-(void)_renderSampleBufferForBoxedMetadataOutput:(opaqueCMSampleBufferRef)arg1 withFaceArray:(id)arg2 ;
-(OpaqueCMBlockBufferRef)_getEmptyMetadataSampleData;
-(BWNodeOutput *)metadataObjectOutput;
-(BWNodeOutput *)boxedMetadataOutput;
-(void)setMetadataObjectOutputEnabled:(BOOL)arg1 ;
-(BOOL)metadataObjectOutputEnabled;
-(void)setBoxedMetadataOutputEnabled:(BOOL)arg1 ;
-(BOOL)boxedMetadataOutputEnabled;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
@end

