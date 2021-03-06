/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "LINE-Structs.h"
//#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface LineStickerManager : NSObject {//XXUnknownSuperclass {
}
+(NSRange)_rangeFromArray:(id)array;
+(id)_indexSetFromArray:(id)array;
+(void)_loadPackageMetadata:(id)metadata;
+(id)_cachedPackageMetadata;
+(id)_defaultPurchases;
+(void)_addPackage:(id)package;
+(id)_remoteURLForStickerPackageMetadata;
+(id)_fileURLForStickerPackageMetadata;
+(void)jibaku;
+(void)removeDelegate:(id)delegate;
+(void)addDelegate:(id)delegate;
+(id)delegates;
+(void)updatePackageMetadata;
+(void)updatePackageMetadataIfNecessary;
+(void)updateActivePurchasesWithProducts:(id)products;
+(void)_updateActivePurchases;
+(void)updateActivePurchases;
+(void)updateActivePurchasesIfNecessary;
+(void)notifySticker:(unsigned)sticker existsInPackageWithID:(long long)anId version:(unsigned)version;
+(CGSize)imageSizeForSticker:(unsigned)sticker;
+(id)packageWithStickerID:(unsigned)stickerID;
+(id)packageWithID:(long long)anId version:(unsigned)version;
+(id)packageWithProduct:(id)product;
+(id)packageWithID:(long long)anId;
+(id)defaultPackages;
+(void)deletePackage:(id)package atIndex:(unsigned)index;
+(void)deletePackage:(id)package;
+(void)movePackageAtIndex:(unsigned)index toIndex:(unsigned)index2;
+(void)addActivePackage:(id)package;
+(id)activePackages;
+(void)initialize;
@end

