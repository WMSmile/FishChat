//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, WCDataItem;

@interface WCDataItemUICache : NSObject
{
    WCDataItem *m_dataItem;
    NSMutableDictionary *m_dicLayerIdShowTipView;
    _Bool m_isShowDetail;
    map_3bd54133 m_contentDescHeight;
    map_4e6d8d17 m_contentDescLayoutStyles[4];
    map_3bd54133 m_likeUserHeight;
    map_4e6d8d17 m_likeUserLayoutStyles;
}

@property(retain, nonatomic) NSMutableDictionary *dicLayerIdShowTipView; // @synthesize dicLayerIdShowTipView=m_dicLayerIdShowTipView;
@property(nonatomic) _Bool isShowDetail; // @synthesize isShowDetail=m_isShowDetail;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=m_dataItem;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isEmpty;
- (map_4e6d8d17 *)likeUserLayoutStyles;
- (map_3bd54133 *)likeUserHeight;
- (map_4e6d8d17 *)contentDescLayoutStyles;
- (map_3bd54133 *)contentDescHeight;

@end

