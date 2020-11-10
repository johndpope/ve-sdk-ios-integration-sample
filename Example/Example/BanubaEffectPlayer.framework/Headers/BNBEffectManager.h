// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from effect_player.djinni

#import <Foundation/Foundation.h>
@class BNBEffect;
@protocol BNBEffectEventListener;
@protocol BNBErrorListener;
@protocol BNBHintListener;


@interface BNBEffectManager : NSObject

/**
 * Add callback to receive errors messages from Effect Player.
 * Thread-safe. May be called from any thread
 */
- (void)addErrorListener:(nullable id<BNBErrorListener>)errorListener;

/**
 * Remove callback to receive errors messages from Effect Player.
 * Thread-safe. May be called from any thread
 */
- (void)removeErrorListener:(nullable id<BNBErrorListener>)errorListener;

/**
 * Add callback to receive user-visible messages from effects.
 * You should display them on UI.
 * Thread-safe. May be called from any thread
 */
- (void)addHintListener:(nullable id<BNBHintListener>)hintListener;

/**
 * Remove callback to receive user-visible messages from effects.
 * Thread-safe. May be called from any thread
 */
- (void)removeHintListener:(nullable id<BNBHintListener>)hintListener;

/**
 * Add callback to receive events from effect.
 * Thread-safe. May be called from any thread
 */
- (void)addEffectEventListener:(nullable id<BNBEffectEventListener>)effectEventListener;

/**
 * Remove callback to receive events from effect.
 * Thread-safe. May be called from any thread
 */
- (void)removeEffectEventListener:(nullable id<BNBEffectEventListener>)effectEventListener;

/**
 * load and activate effect sync
 * MUST be called from the render thread
 */
- (nullable BNBEffect *)load:(nonnull NSString *)url;

/**
 * load effect async, activate in the draw() call when it will be ready
 * Thread-safe. May be called from any thread
 */
- (nullable BNBEffect *)loadAsync:(nonnull NSString *)url;

/**
 * Unload effect from cache. if no currently loading effect -
 * works the same way as load(""); launches empty effect loading.
 * MUST be called from the render thread
 */
- (void)unload:(nullable BNBEffect *)effect;

/**
 * get active
 * Thread-safe. May be called from any thread
 */
- (nullable BNBEffect *)current;

/**
 * size in Mb, effects count
 * Thread-safe. May be called from any thread
 */
- (void)changeCacheQuota:(int32_t)size
                   count:(int32_t)count;

/**
 * Forces cache reload on the next load/load_async call
 * Thread-safe. May be called from any thread
 */
- (void)forceCacheReload;

/**
 * Set effect audio volume.
 * Thread-safe. May be called from any thread
 * @param volume A value in range `[0, 1]`, where `1` means maximum volume.
 */
- (void)setEffectVolume:(float)volume;

/**
 * Changes effect player render size, should be called on render thread.
 * MUST be called from the render thread
 */
- (void)setEffectSize:(int32_t)fxWidth
             fxHeight:(int32_t)fxHeight;

@end