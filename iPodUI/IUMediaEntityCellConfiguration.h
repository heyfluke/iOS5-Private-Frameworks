/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUArrayCellConfiguration.h>

@class MPImageCache, MPImageCacheRequest, MPMediaEntity, UIImage;

@interface IUMediaEntityCellConfiguration : IUArrayCellConfiguration
{
    MPImageCache *_artworkImageCache;
    MPImageCacheRequest *_artworkImageRequest;
    UIImage *_artwork;
    MPMediaEntity *_entity;
    BOOL _isGenius;
}

@property(nonatomic) BOOL isGenius; // @synthesize isGenius=_isGenius;
@property(readonly, nonatomic) MPMediaEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) UIImage *artwork; // @synthesize artwork=_artwork;
@property(readonly, nonatomic) BOOL displaysArtworkFromReprentativeItem;
@property(readonly, nonatomic) struct CGSize artworkSize;
- (void)reloadStrings;
- (void)reloadImages;
- (id)mediaItem;
- (void)setArtworkImageRequest:(id)arg1 artworkLoadCompletionHandler:(id)arg2;
- (id)newImageRequestWithMediaEntity:(id)arg1;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (void)reloadData;
- (id)downloadableAsset;
- (id)description;
- (void)dealloc;

@end
