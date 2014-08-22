(function($) {
    Drupal.behaviors.phone_verify = {
        attach: function(context) {
            $(".phone-verify-send", context).each(function() {
                var btn = $(this).attr("disabled", "disabled");
                var count = btn.attr("data-rate");
                var timer = function() {
                    if (count && $.isNumeric(count) && count > 0) {
                        count--;
                        btn.val(count + "秒后重新发送");
                        btn.text(count + "秒后重新发送");
                        setTimeout(function() {
                            timer();
                        }, 1000);
                    } else {
                        btn.val("发送验证码");
                        btn.text("发送验证码");
                        btn.removeAttr("data-rate");
                        btn.removeAttr("disabled");
                    }
                };
                timer();
            });
        }
    };
})(jQuery);

