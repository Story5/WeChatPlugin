//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCTDatabase, WCTTable;

@interface WCFavoritesDB : NSObject
{
    WCTDatabase *_favoritesDB;
    WCTTable *_favoritesItemTable;
    WCTTable *_favoritesCdnInfoTable;
    WCTTable *_favoritesDownloadCndInfoTable;
    WCTTable *_favoritesSessionTable;
    WCTTable *_favoritesFileRetainCountTable;
    WCTTable *_favoritesSearchTable;
    WCTTable *_favoritesTagTable;
}

+ (void)deleteFavoritesDB;
- (void).cxx_destruct;
- (void)recordDBFileInfo;
- (void)clearTables;
- (void)closeDBBeforeInit;
- (void)closeDB;
- (BOOL)rollbackTransaction;
- (BOOL)commitTransaction;
- (BOOL)beginTransaction;
- (void)dealloc;
- (BOOL)initDB;
- (id)init;
- (void)fillFavItemUpdateProperties:(list_2812bee2 *)arg1;
- (void)fillFavItemUpdatePropertiesForFavObject:(list_2812bee2 *)arg1;
- (id)getNeedBatchGetFavoritesItemListByType:(int)arg1 andMinUpdateTime:(unsigned int)arg2;
- (id)getFirstPageNeedBatchGetFavoritesItemListByType:(int)arg1;
- (id)getFirstPageFavoritesItemListByType:(int)arg1;
- (id)checkItemTableBeforeAddItemByFavId:(unsigned int)arg1 andLocalId:(unsigned int)arg2;
- (id)getDeletedItemTableDataList;
- (BOOL)updateItemTableDataXML:(id)arg1 byLocalId:(unsigned int)arg2;
- (BOOL)updateItemTableDataTime:(unsigned int)arg1 byLocalId:(unsigned int)arg2;
- (BOOL)updateItemTableDataForFavObject:(id)arg1 ByFavId:(unsigned int)arg2;
- (BOOL)updateItemTableDataUpdateSeq:(unsigned int)arg1 byFavId:(unsigned int)arg2;
- (BOOL)updateItemTableData:(id)arg1 withLocalId:(unsigned int)arg2;
- (BOOL)updateItemTableDataLocalStatus:(int)arg1 withLocalId:(unsigned int)arg2;
- (id)getDownloadFailedItemTableDataList;
- (id)getAsyncUploadFailedItemTableDataList;
- (id)getUploadFailedItemTableDataList;
- (id)getDownloadingItemTableDataList;
- (id)getAsyncUploadingItemTableDataList;
- (id)getUploadingItemTableDataList;
- (BOOL)deleteItemTableDataByFavId:(unsigned int)arg1;
- (BOOL)deleteItemTableDataByLocalId:(unsigned int)arg1;
- (id)getItemTableDataBySourceId:(id)arg1;
- (id)getItemTableDataByLocalId:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)getItemTableDataByLocalId:(unsigned int)arg1;
- (id)getItemTableDataByFavId:(unsigned int)arg1;
- (unsigned long long)getCountOfAllItemTableDataWithoutDeleted;
- (id)getAllItemTableDataWithoutDeleted;
- (unsigned long long)getCountOfItemTableDataWithSenderUserName:(id)arg1;
- (id)getItemTableDataWithSenderUserNames:(id)arg1 types:(id)arg2;
- (id)getItemTableDataWithSenderUserNames:(id)arg1 type:(unsigned int)arg2;
- (id)getItemTableDataWithSenderUserName:(id)arg1;
- (id)getAllSenderUserNamesInItemTable;
- (id)topSenderUserNamesWithLimit:(unsigned int)arg1;
- (id)getTopGroupChatSenderUserNamesWithLimitInItemTable:(unsigned int)arg1;
- (id)getAllItemTableDataWithEssentialFieldsContainDeleted;
- (id)getAllGroupChatSenderUserNamesInItemTable;
- (id)getAllItemTableDataWithFullFieldsWithType:(int)arg1;
- (id)getAllItemTableDataWithEssentialFieldsWithTypes:(id)arg1;
- (id)getAllItemTableDataWithEssentialFieldsWithType:(int)arg1;
- (BOOL)insertNewItemTableDataRow:(id)arg1;
- (void)fillLegalItemsArray:(id)arg1 withDBItems:(id)arg2;
- (void)fillItemsArray:(id)arg1 withDBItems:(id)arg2;
- (void)fillDBFavItem:(id)arg1 fromFavObject:(id)arg2;
- (void)fillDBFavItem:(id)arg1 fromFavItem:(id)arg2 xml:(id)arg3;
- (void)fillDBFavItem:(id)arg1 fromFavItem:(id)arg2;
- (BOOL)getFavoritesItemValue:(id)arg1 fromDBItem:(id)arg2;
- (BOOL)searchWithKeyword:(id)arg1 userName:(id)arg2 tag:(id)arg3 types:(id)arg4 userNameOrNil:(id)arg5 retList:(id)arg6;
- (id)checkBeforeAddItemByFavId:(unsigned int)arg1 andLocalId:(unsigned int)arg2;
- (BOOL)deleteFavItemInDBWithFavID:(unsigned int)arg1;
- (BOOL)deleteFavItemInDBWithLocalID:(unsigned int)arg1;
- (BOOL)updateFavItemUpdateTime:(unsigned int)arg1 WithLocalID:(unsigned int)arg2;
- (BOOL)updateFavItemInDBWithFavObject:(id)arg1;
- (BOOL)updateFavItemInDB:(id)arg1;
- (BOOL)updateFavItemUpdateSeq:(unsigned int)arg1 byFavID:(unsigned int)arg2;
- (BOOL)updateFavItemLocalStatus:(int)arg1 withLocalID:(unsigned int)arg2;
- (BOOL)getNeedBatchGetFavoritesItemList:(id)arg1 byType:(int)arg2 andMinUpdateTime:(unsigned int)arg3;
- (BOOL)getFirstPageNeedBatchGetFavoritesItemList:(id)arg1 byType:(int)arg2;
- (BOOL)getFirstPageFavoritesItemList:(id)arg1 byType:(int)arg2;
- (id)xmlOfFavItem:(id)arg1;
- (id)getAllSenderUserNamesInDB;
- (BOOL)getAllFavItemsWithTag:(id)arg1 retList:(id)arg2;
- (BOOL)getAllGroupChatSenderUserNamesInDB:(id)arg1;
- (BOOL)getFavItemsWithSenderUserNames:(id)arg1 types:(id)arg2 retList:(id)arg3;
- (unsigned long long)getCountOfAllFavItemsWithoutDeleted;
- (BOOL)getFavItemLocalIDWithFavID:(unsigned int)arg1 retLocalID:(id)arg2;
- (unsigned long long)countOfItemsWithTypes:(id)arg1;
- (unsigned long long)countOfItemsWithType:(int)arg1;
- (BOOL)getDeletedItems:(id)arg1;
- (BOOL)getDownloadFailedItems:(id)arg1;
- (BOOL)getDownloadingItems:(id)arg1;
- (BOOL)getUploadFailedItems:(id)arg1;
- (BOOL)getUploadingItems:(id)arg1;
- (id)getFavItemWithSourceID:(id)arg1;
- (id)getFavItemWithLocalID:(unsigned int)arg1;
- (id)getFavItemWithFavID:(unsigned int)arg1;
- (BOOL)getAllFavItemsWithType:(int)arg1 retList:(id)arg2;
- (BOOL)getAllFavItemsEssentialFieldsContainDeletedWithRetList:(id)arg1;
- (BOOL)getAllFavItemsEssentialFieldsWithTypes:(id)arg1 retList:(id)arg2;
- (BOOL)getAllFavItemsEssentialFieldsWithType:(int)arg1 retList:(id)arg2;
- (BOOL)insertNewRowWithFavoritesItem:(id)arg1;
- (BOOL)deleteDownloadCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (BOOL)updateDownloadCdnInfo:(id)arg1 byItemLocalDataId:(id)arg2 andType:(int)arg3;
- (id)getDownloadCdnInfoByLocalItemDataId:(id)arg1 isThumb:(BOOL)arg2;
- (id)getNextDownloadCdnInfoByLocalItemId:(unsigned int)arg1;
- (BOOL)insertNewRowInDownloadCdnInfoTable:(id)arg1;
- (BOOL)updateDownloadCdnInfo:(id)arg1;
- (BOOL)addDownloadCDNInfo:(id)arg1;
- (unsigned long long)countOfItemsWithTag:(id)arg1;
- (id)itemLocalIDsWithTagString:(id)arg1;
- (id)itemsWithTagString:(id)arg1;
- (unsigned int)allDistinctTagsCount;
- (id)topTagsOrderByCountWithLimit:(unsigned int)arg1;
- (id)allDistinctTags;
- (id)allTags;
- (id)tagsWithItemLocalID:(unsigned int)arg1;
- (BOOL)deleteTagsByLocalId:(unsigned int)arg1;
- (BOOL)insertOrUpdateNewTag:(id)arg1;
- (BOOL)insertItemTag:(id)arg1;
- (BOOL)insertTag:(id)arg1 withFavLocalId:(unsigned int)arg2;
- (BOOL)isMd5RetainCountZero:(id)arg1;
- (BOOL)insertNewRowWithFileRetainCntTableData:(id)arg1;
- (BOOL)deleteItemByMd5:(id)arg1 andLocalItemId:(unsigned int)arg2;
- (BOOL)isItemExist:(id)arg1 localItemId:(unsigned int)arg2;
- (BOOL)updateCDNInfo:(id)arg1;
- (BOOL)addCDNInfo:(id)arg1;
- (BOOL)deleteCdnInfoByLocalId:(unsigned int)arg1;
- (id)getUploadCdnInfoByLocalItemDataId:(id)arg1 isThumb:(BOOL)arg2;
- (BOOL)updateCdnInfo:(id)arg1 md5:(id)arg2 head256Md5:(id)arg3 isThumb:(BOOL)arg4;
- (id)getNextAsyncUploadCndInfoByLocalItemId:(unsigned int)arg1;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (BOOL)insertNewCDNRow:(id)arg1;
- (id)searchWithKeyword:(id)arg1 types:(id)arg2 userName:(id)arg3 inLocalIDs:(id)arg4;
- (id)searchWithKeyword:(id)arg1 type:(unsigned int)arg2 userName:(id)arg3 inLocalIDs:(id)arg4;
- (BOOL)updateOrInsertSearchItemWithFavoritesItem:(id)arg1;

@end
