$( document ).ready(function() {
   Reveal.initialize({
        controls: true,
        progress: true,
        history: true,
        center: true,
        //width: 1024,
        //height: 768,
        width: 960,
        height: 700,
        transition: 'slide', // none/fade/slide/convex/concave/zoom
        // Optional reveal.js plugins
        dependencies: [{
            src: 'lib/js/classList.js',
            condition: function() {
                return !document.body.classList;
            }
        }, {
            src: 'plugin/markdown/marked.js',
            condition: function() {
                return !!document.querySelector('[data-markdown]');
            }
        }, {
            src: 'plugin/markdown/markdown.js',
            condition: function() {
                return !!document.querySelector('[data-markdown]');
            }
        },{
            src: 'plugin/math/math.js',
            async: true
        }, {
            src: 'plugin/highlight/highlight.js',
            async: true,
            condition: function() {
                return !!document.querySelector('pre code');
            },
            callback: function() {
                hljs.initHighlightingOnLoad();
            }
        }, {
            src: 'plugin/zoom-js/zoom.js',
            async: true
        }, {
            src: 'plugin/notes/notes.js',
            async: true
        }]
    });
});
