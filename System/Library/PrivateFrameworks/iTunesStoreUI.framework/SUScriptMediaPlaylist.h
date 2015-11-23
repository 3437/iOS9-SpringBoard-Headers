/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptMediaItemCollection.h>

@class MPMediaPlaylist;

@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection

@property (nonatomic,readonly) MPMediaPlaylist * nativePlaylist; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(unsigned long long)nativePlaylistAttributesForScriptPlaylistAttributes:(id)arg1 ;
+(id)scriptPlaylistAttributesForNativePlaylistAttributes:(unsigned long long)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)_className;
-(MPMediaPlaylist *)nativePlaylist;
@end
