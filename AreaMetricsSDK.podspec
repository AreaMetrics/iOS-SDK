Pod::Spec.new do |s|
  s.name = "AreaMetricsSDK"
  s.version = "3.3.1"
  s.summary = "AreaMetrics iOS SDK"
  s.homepage = "http://areametrics.com"
  s.author = { "AreaMetrics, Inc." => "engineering@areametrics.com" }
  s.platform = :ios, "8.0"
  s.source = { :git => "https://github.com/AreaMetrics/iOS-SDK.git", :tag => "v3.3.1" }
  s.source_files = 'AreaMetricsSDK.framework/Versions/A/Headers/*.h'
  s.preserve_paths = 'AreaMetricsSDK.framework'
  s.vendored_frameworks = 'AreaMetricsSDK.framework'
  s.public_header_files = 'AreaMetricsSDK.framework/Versions/A/Headers/*.h'
  s.frameworks = ["SystemConfiguration", "CoreLocation", "CoreBluetooth", "Foundation", "UIKit", "Security", "AdSupport"]
  s.license = { :type => 'Copyright',
    :text => <<-LICENSE
    Copyright 2016 AreaMetrics, Inc. All rights reserved.
    LICENSE
  }
end
