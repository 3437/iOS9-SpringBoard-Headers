/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ModelIO/MDLTexture.h>

@interface MDLNoiseTexture : MDLTexture {

	BOOL _vectorNoise;
	float _smoothness;
	BOOL _grayScale;

}
-(id)generateDataAtLevel:(long long)arg1 ;
-(id)initVectorNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 ;
-(id)initScalarNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(BOOL)arg5 ;
@end
