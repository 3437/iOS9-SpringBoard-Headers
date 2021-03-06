/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSRecognitionResultHandler.h>

@class VoiceDialNameDataSource, NSString;

@interface VoiceDialResultHandler : NSObject <VSRecognitionResultHandler> {

	void* _addressBook;
	VoiceDialNameDataSource* _nameSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)_addressBook;
-(id)actionForRecognitionResults:(id)arg1 ;
-(id)_nameSource;
-(id)_phoneticNames:(id)arg1 fromDictionary:(id)arg2 ;
@end

