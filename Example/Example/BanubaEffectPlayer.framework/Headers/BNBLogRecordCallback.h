// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from utils.djinni

#import "BNBSeverityLevel.h"
#import <Foundation/Foundation.h>


@protocol BNBLogRecordCallback

- (void)onLogRecordCallback:(BNBSeverityLevel)level
                     domain:(nonnull NSString *)domain
                    message:(nonnull NSString *)message;

@end
