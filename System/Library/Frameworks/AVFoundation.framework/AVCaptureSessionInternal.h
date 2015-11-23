/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, AVCaptureDevice, FigCaptureSessionConfiguration, NSMutableArray, NSHashTable, AVCaptureSessionConfiguration, NSError, AVRunLoopCondition, NSObject;

@interface AVCaptureSessionInternal : NSObject {

	AVWeakReference* weakReference;
	NSString* sessionPreset;
	AVCaptureDevice* adjustingDeviceActiveFormat;
	int beginConfigRefCount;
	FigCaptureSessionConfiguration* sessionConfig;
	OpaqueFigCaptureSessionRef figCaptureSession;
	BOOL figCaptureSessionRunning;
	BOOL figCaptureSessionStarted;
	NSMutableArray* inputs;
	NSMutableArray* outputs;
	NSHashTable* videoPreviewLayers;
	NSMutableArray* connections;
	NSMutableArray* committedAVCaptureSessionConfigurations;
	AVCaptureSessionConfiguration* liveAVCaptureSessionConfiguration;
	NSError* stopError;
	BOOL running;
	BOOL interrupted;
	BOOL usesApplicationAudioSession;
	BOOL automaticallyConfiguresApplicationAudioSession;
	AVRunLoopCondition* runLoopCondition;
	BOOL waitingForFigCaptureSessionToStart;
	BOOL waitingForFigCaptureSessionToStop;
	BOOL waitingForFigCaptureSessionConfigurationToBecomeLive;
	BOOL waitingForFigCaptureSessionToStopDueToEmptyConfig;
	OpaqueCMClockRef masterClock;
	BOOL notifiesOnMainThread;
	BOOL adjustingVideoDeviceHDREnabled;
	BOOL resetVideoZoomFactorAndMinMaxFrameDurations;
	BOOL authorizedToUseCameraInMultipleForegroundAppLayout;
	NSObject*<OS_dispatch_semaphore> serverConnectionDiedSemaphore;
	id serverConnectionDiedNotificationToken;

}
@end
