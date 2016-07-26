Pod::Spec.new do |s|
  s.name = "AreaMetricsSDK"
  s.version = "2.3.0"
  s.summary = "AreaMetrics iOS SDK"
  s.homepage = "http://areametrics.com"
  s.author = {"AreaMetrics, Inc." => "engineering@areametrics.com"}
  s.platform = :ios, "7.0"
  s.source = {:git => "https://github.com/AreaMetrics/iOS-SDK.git"}
  s.source_files = 'AreaMetricsSDK/AreaMetricsSDK.framework/Headers/AreaMetricsSDK.h'
  s.vendored_frameworks = 'AreaMetricsSDK/AreaMetricsSDK.framework'
  s.frameworks = 'SystemConfiguration', 'CoreLocation', 'CoreBluetooth', 'Foundation', 'UIKit', 'Security', 'AdSupport'
  s.xcconfig = {'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/AreaMetricsSDK"', 'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/Headers/AreaMetricsSDK"'}
  s.license = {:type => 'Copyright',
    :text => <<-LICENSE
    Copyright 2016 AreaMetrics, Inc. All rights reserved.
    LICENSE
  }
end
