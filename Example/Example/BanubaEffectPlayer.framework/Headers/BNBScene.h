// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#import <Foundation/Foundation.h>
@class BNBAssetManager;
@class BNBEntity;
@class BNBLayer;
@class BNBRenderList;


/**
 * A class representing a displayable scene. Aggregates in one place the
 * hierarchy of Entities with their Components,  AssetManager and RenderList
 * and makes it work all together.
 */
@interface BNBScene : NSObject

/** Set a new name for a scene. The name could be empty. */
- (void)setName:(nonnull NSString *)name;

/** Get a scene name. */
- (nonnull NSString *)getName;

/** Get the root of entities hierarchy. It always exists and has a name "Root". */
- (nullable BNBEntity *)getRoot;

/** Get the AssetManager of a current scene. It always exists. */
- (nullable BNBAssetManager *)getAssetManager;

- (void)addLayer:(nullable BNBLayer *)layer;

- (nonnull NSArray<BNBLayer *> *)getLayers;

/** Return first found layer with name `layerName` or NULL if such layer doesn't exist. */
- (nullable BNBLayer *)getLayer:(nonnull NSString *)layerName;

- (void)removeLayer:(nullable BNBLayer *)layer;

- (void)setRenderList:(nullable BNBRenderList *)renderList;

- (void)clearRenderList;

@end
