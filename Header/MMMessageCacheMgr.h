//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMSessionMgrExt.h"
#import "IMessageExt.h"
#import "MMCDNDownloadMgrExt.h"
#import "MMService.h"

@class AFHTTPSessionManager, MMRecordDownloadMgr, NSCache, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface MMMessageCacheMgr : MMService <MMCDNDownloadMgrExt, IMMSessionMgrExt, IMessageExt, MMService>
{
    MMRecordDownloadMgr *_recordDownloadMgr;
    NSCache *_textMessageCache;
    NSCache *_translationCache;
    NSCache *_thumbImgCache;
    NSCache *_originImgCache;
    NSCache *_originFileCache;
    AFHTTPSessionManager *_downloadMgr;
    NSMutableDictionary *_cdnDownloadTasks;
    NSObject<OS_dispatch_queue> *_diskQueue;
    NSMutableDictionary *_downloadingOriginImageSet;
}

+ (void)clearOldMessageFilesAtFolder:(id)arg1;
+ (void)clearOldMessageFiles;
@property(retain, nonatomic) NSMutableDictionary *downloadingOriginImageSet; // @synthesize downloadingOriginImageSet=_downloadingOriginImageSet;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *diskQueue; // @synthesize diskQueue=_diskQueue;
@property(retain, nonatomic) NSMutableDictionary *cdnDownloadTasks; // @synthesize cdnDownloadTasks=_cdnDownloadTasks;
@property(retain, nonatomic) AFHTTPSessionManager *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) NSCache *originFileCache; // @synthesize originFileCache=_originFileCache;
@property(retain, nonatomic) NSCache *originImgCache; // @synthesize originImgCache=_originImgCache;
@property(retain, nonatomic) NSCache *thumbImgCache; // @synthesize thumbImgCache=_thumbImgCache;
@property(retain, nonatomic) NSCache *translationCache; // @synthesize translationCache=_translationCache;
@property(retain, nonatomic) NSCache *textMessageCache; // @synthesize textMessageCache=_textMessageCache;
@property(retain, nonatomic) MMRecordDownloadMgr *recordDownloadMgr; // @synthesize recordDownloadMgr=_recordDownloadMgr;
- (void).cxx_destruct;
- (void)cdnDownloadMgrDidFinishedDownloadWithChatName:(id)arg1 localID:(unsigned int)arg2 recordMsgData:(id)arg3 type:(int)arg4 isSuccess:(BOOL)arg5;
- (void)cdnDownloadMgrDidFailedDownloadWithChatName:(id)arg1 localID:(unsigned int)arg2 recordMsgData:(id)arg3 type:(int)arg4;
- (void)cdnDownloadMgrDidFinishedDownloadWithChatName:(id)arg1 localID:(unsigned int)arg2 recordMsgData:(id)arg3 type:(int)arg4;
- (void)downloadImageFinishedWithMessage:(id)arg1 type:(int)arg2 isSuccess:(BOOL)arg3;
- (void)cdnDownloadMgrDidFailedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)cdnDownloadMgrDidFinishedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)cdnDownloadMgrDownloaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3 type:(int)arg4 tryShow:(BOOL)arg5;
- (void)thumbImageWithChatName:(id)arg1 mesLocalID:(unsigned int)arg2 recordMsgData:(id)arg3 isFavorite:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)downloadSightFileWithChatName:(id)arg1 mesLocalID:(unsigned int)arg2 recordMsgData:(id)arg3 isFavorite:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)originalFileWithChatName:(id)arg1 mesLocalID:(unsigned int)arg2 recordMsgData:(id)arg3 isFavorite:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)originalImageWithChatName:(id)arg1 mesLocalID:(unsigned int)arg2 recordMsgData:(id)arg3 isFavorite:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)isOriginalImageDownloading:(id)arg1;
- (void)originalImageWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadImageWithURLString:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)thumbImageWithMessage:(id)arg1 readerWrap:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)thumbImageWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cachedOriginFileWithFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedFileDataWithFilePath:(id)arg1;
- (void)cachedThumbImageWithFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cachedOriginImageWithFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedOriginImageWithFilePath:(id)arg1;
- (void)removeImageMemoryCacheWithFilePath:(id)arg1 isThumbnail:(BOOL)arg2;
- (id)cachedImageWithFilePath:(id)arg1 isThumbnail:(BOOL)arg2;
- (void)clearTextMessageCache;
- (void)setTranslationString:(id)arg1 forKey:(id)arg2;
- (id)cachedTranslationStringForKey:(id)arg1;
- (void)setTextMessageString:(id)arg1 forKey:(id)arg2;
- (id)cachedTextMessageStringForKey:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2;
- (void)onDelAllMsg:(id)arg1;
- (void)onSessionDeletedWithUserName:(id)arg1 atIndex:(long long)arg2;
- (void)clearAllCache;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

