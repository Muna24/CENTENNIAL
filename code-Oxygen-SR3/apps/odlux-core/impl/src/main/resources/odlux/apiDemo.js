!function(e,t){"object"==typeof exports&&"object"==typeof module?module.exports=t(require("app")):"function"==typeof define&&define.amd?define(["app"],t):"object"==typeof exports?exports.apiDemo=t(require("app")):e.apiDemo=t(e.app)}(window,function(n){return function(n){var o={};function r(e){if(o[e])return o[e].exports;var t=o[e]={i:e,l:!1,exports:{}};return n[e].call(t.exports,t,t.exports,r),t.l=!0,t.exports}return r.m=n,r.c=o,r.d=function(e,t,n){r.o(e,t)||Object.defineProperty(e,t,{enumerable:!0,get:n})},r.r=function(e){"undefined"!=typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(e,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(e,"__esModule",{value:!0})},r.t=function(t,e){if(1&e&&(t=r(t)),8&e)return t;if(4&e&&"object"==typeof t&&t&&t.__esModule)return t;var n=Object.create(null);if(r.r(n),Object.defineProperty(n,"default",{enumerable:!0,value:t}),2&e&&"string"!=typeof t)for(var o in t)r.d(n,o,function(e){return t[e]}.bind(null,o));return n},r.n=function(e){var t=e&&e.__esModule?function(){return e.default}:function(){return e};return r.d(t,"a",t),t},r.o=function(e,t){return Object.prototype.hasOwnProperty.call(e,t)},r.p="",r(r.s=0)}([function(e,t,n){e.exports=n(1)},function(e,t,n){"use strict";n.r(t);var o=n(2),r=n(4),i=n(5),u=n(6),c=n(7),s=n(8),f=n(9),a=n(12),l=void 0;function p(e,t){if(e!==t)throw new TypeError("Cannot instantiate an arrow function")}var d=function(e){var n=this;return p(this,l),o.createElement(o.Fragment,null,o.createElement("button",{onClick:e.requestModules},"Load Modules"),o.createElement("ul",null,e.modules.map(function(e,t){return p(this,n),o.createElement("li",{key:t},e.name)}.bind(this))))}.bind(void 0),m=Object(r.withRouter)(Object(c.default)(function(e){return p(this,l),{modules:e.apiDemo.modules}}.bind(void 0),function(e){var t=this;return p(this,l),{requestModules:function(){p(this,t),e.dispatch(new s.ApiAction("restconf/modules",a.ModulesRequestSuccess,!0))}.bind(this)}}.bind(void 0))(d));u.default.registerApplication({name:"apiDemo",icon:i.faNewspaper,rootComponent:m,rootActionHandler:f.apiDemoRootHandler,menuEntry:"API Demo"})},function(e,t,n){e.exports=n(3)("../../node_modules/react/index.js")},function(e,t){e.exports=n},function(e,t,n){e.exports=n(3)("../../node_modules/react-router-dom/es/index.js")},function(e,t,n){e.exports=n(3)("../../node_modules/@fortawesome/free-solid-svg-icons/index.es.js")},function(e,t,n){e.exports=n(3)("./services/applicationManager.ts")},function(e,t,n){e.exports=n(3)("./flux/connect.ts")},function(e,t,n){e.exports=n(3)("./middleware/api.ts")},function(e,t,n){"use strict";n.r(t),n.d(t,"apiDemoRootHandler",function(){return i});var o=n(10),r={modules:n(11).moduleHandler},i=Object(o.combineActionHandler)(r);t.default=i},function(e,t,n){e.exports=n(3)("./flux/middleware.ts")},function(e,t,n){"use strict";n.r(t),n.d(t,"moduleHandler",function(){return i});var o=n(12);var r=[],i=function(){var e=0<arguments.length&&void 0!==arguments[0]?arguments[0]:r,t=1<arguments.length?arguments[1]:void 0;return function(e,t){if(e!==t)throw new TypeError("Cannot instantiate an arrow function")}(this,void 0),t instanceof o.ModulesRequestSuccess?t.result.modules.module:e}.bind(void 0)},function(e,t,n){"use strict";n.r(t),n.d(t,"ModulesRequestSuccess",function(){return s});var o=n(13);function r(e){return(r="function"==typeof Symbol&&"symbol"==typeof Symbol.iterator?function(e){return typeof e}:function(e){return e&&"function"==typeof Symbol&&e.constructor===Symbol&&e!==Symbol.prototype?"symbol":typeof e})(e)}function i(e,t){return!t||"object"!==r(t)&&"function"!=typeof t?function(e){if(void 0!==e)return e;throw new ReferenceError("this hasn't been initialised - super() hasn't been called")}(e):t}function u(e){return(u=Object.setPrototypeOf?Object.getPrototypeOf:function(e){return e.__proto__||Object.getPrototypeOf(e)})(e)}function c(e,t){return(c=Object.setPrototypeOf||function(e,t){return e.__proto__=t,e})(e,t)}var s=function(e){function n(e){var t;return function(e,t){if(!(e instanceof t))throw new TypeError("Cannot call a class as a function")}(this,n),(t=i(this,u(n).call(this))).result=e,t}return function(e,t){if("function"!=typeof t&&null!==t)throw new TypeError("Super expression must either be null or a function");e.prototype=Object.create(t&&t.prototype,{constructor:{value:e,writable:!0,configurable:!0}}),t&&c(e,t)}(n,o["Action"]),n}()},function(e,t,n){e.exports=n(3)("./flux/action.ts")}])});